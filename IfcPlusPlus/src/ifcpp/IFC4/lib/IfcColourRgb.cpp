/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcColourRgb.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcNormalisedRatioMeasure.h"

// ENTITY IfcColourRgb 
IfcColourRgb::IfcColourRgb() {}
IfcColourRgb::IfcColourRgb( int id ) { m_id = id; }
IfcColourRgb::~IfcColourRgb() {}
shared_ptr<IfcPPObject> IfcColourRgb::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcColourRgb> copy_self( new IfcColourRgb() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Red ) { copy_self->m_Red = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_Red->getDeepCopy(options) ); }
	if( m_Green ) { copy_self->m_Green = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_Green->getDeepCopy(options) ); }
	if( m_Blue ) { copy_self->m_Blue = dynamic_pointer_cast<IfcNormalisedRatioMeasure>( m_Blue->getDeepCopy(options) ); }
	return copy_self;
}
void IfcColourRgb::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCCOLOURRGB" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Red ) { m_Red->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Green ) { m_Green->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Blue ) { m_Blue->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcColourRgb::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcColourRgb::toString() const { return L"IfcColourRgb"; }
void IfcColourRgb::readStepArguments( const std::vector<std::wstring>& args, const map_t<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcColourRgb, expecting 4, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Red = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[1], map );
	m_Green = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[2], map );
	m_Blue = IfcNormalisedRatioMeasure::createObjectFromSTEP( args[3], map );
}
void IfcColourRgb::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcColourSpecification::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Red", m_Red ) );
	vec_attributes.push_back( std::make_pair( "Green", m_Green ) );
	vec_attributes.push_back( std::make_pair( "Blue", m_Blue ) );
}
void IfcColourRgb::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcColourSpecification::getAttributesInverse( vec_attributes_inverse );
}
void IfcColourRgb::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcColourSpecification::setInverseCounterparts( ptr_self_entity );
}
void IfcColourRgb::unlinkFromInverseCounterparts()
{
	IfcColourSpecification::unlinkFromInverseCounterparts();
}
